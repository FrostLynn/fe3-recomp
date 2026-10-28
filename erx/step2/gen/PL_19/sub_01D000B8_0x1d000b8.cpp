#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D000B8
// Address: 0x1d000b8 - 0x1d00150
void sub_01D000B8_0x1d000b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D000B8_0x1d000b8");
#endif

    switch (ctx->pc) {
        case 0x1d00104u: goto label_1d00104;
        case 0x1d00130u: goto label_1d00130;
        default: break;
    }

    ctx->pc = 0x1d000b8u;

    // 0x1d000b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d000b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d000bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d000bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d000c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d000c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d000c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d000c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d000c8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1d000c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d000cc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1d000ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d000d0: 0x8c8f0024  lw          $t7, 0x24($a0)
    ctx->pc = 0x1d000d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d000d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d000d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d000d8: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D000D8u;
    {
        const bool branch_taken_0x1d000d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D000DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D000D8u;
        // 0x1d000dc: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d000d8) {
            ctx->pc = 0x1D00138u;
            goto label_1d00138;
        }
    }
    ctx->pc = 0x1D000E0u;
    // 0x1d000e0: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d000e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d000e4: 0x25efbc80  addiu       $t7, $t7, -0x4380
    ctx->pc = 0x1d000e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950016));
    // 0x1d000e8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d000e8u;
    { uint32_t bits = FAST_READ32(0x1D0BC80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d000ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d000ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d000f0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1D000F0u;
    {
        const bool branch_taken_0x1d000f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d000f0) {
            ctx->pc = 0x1D000F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D000F0u;
            // 0x1d000f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0013Cu;
            goto label_1d0013c;
        }
    }
    ctx->pc = 0x1D000F8u;
    // 0x1d000f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d000f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d000fc: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1D000FCu;
    SET_GPR_U32(ctx, 31, 0x1D00104u);
    ctx->pc = 0x1D00100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D000FCu;
    // 0x1d00100: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1D000FCu, 0x1D00104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00104u;
label_1d00104:
    // 0x1d00104: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d00104u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d00108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d00108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0010c: 0x25efbc84  addiu       $t7, $t7, -0x437C
    ctx->pc = 0x1d0010cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950020));
    // 0x1d00110: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d00110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d00114: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d00114u;
    { uint32_t bits = FAST_READ32(0x1D0BC84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d00118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d00118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0011c: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1d0011cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d00120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d00120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00124: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x1d00124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x1d00128: 0xc73f74a  jal         func_1CFDD28
    ctx->pc = 0x1D00128u;
    SET_GPR_U32(ctx, 31, 0x1D00130u);
    ctx->pc = 0x1D0012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00128u;
    // 0x1d0012c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD28u, 0x1D00128u, 0x1D00130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00130u;
label_1d00130:
    // 0x1d00130: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d00130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d00134: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1d00134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
label_1d00138:
    // 0x1d00138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d00138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0013c:
    // 0x1d0013c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d00140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d00140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d00144: 0x873f508  j           func_1CFD420
    ctx->pc = 0x1D00144u;
    ctx->pc = 0x1D00148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00144u;
    // 0x1d00148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD420u;
    sub_01CFD420_0x1cfd420(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0014Cu;
    // 0x1d0014c: 0x0  nop
    ctx->pc = 0x1d0014cu;
    // NOP
    ctx->pc = 0x1d00150u;
}
