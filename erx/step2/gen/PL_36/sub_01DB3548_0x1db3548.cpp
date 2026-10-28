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

// Function: sub_01DB3548
// Address: 0x1db3548 - 0x1db3620
void sub_01DB3548_0x1db3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3548_0x1db3548");
#endif

    switch (ctx->pc) {
        case 0x1db3564u: goto label_1db3564;
        case 0x1db3574u: goto label_1db3574;
        case 0x1db3580u: goto label_1db3580;
        case 0x1db3590u: goto label_1db3590;
        case 0x1db359cu: goto label_1db359c;
        case 0x1db35ecu: goto label_1db35ec;
        default: break;
    }

    ctx->pc = 0x1db3548u;

    // 0x1db3548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db354c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db3550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db3554: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db3554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db3558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db3558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db355c: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB355Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3564u);
    ctx->pc = 0x1DB3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB355Cu;
    // 0x1db3560: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB355Cu, 0x1DB3564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3564u;
label_1db3564:
    // 0x1db3564: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1db3564u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1db3568: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1db3568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1db356c: 0xc76c684  jal         func_1DB1A10
    ctx->pc = 0x1DB356Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3574u);
    ctx->pc = 0x1DB3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB356Cu;
    // 0x1db3570: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1A10u, 0x1DB356Cu, 0x1DB3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3574u;
label_1db3574:
    // 0x1db3574: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db3574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db3578: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3578u;
    SET_GPR_U32(ctx, 31, 0x1DB3580u);
    ctx->pc = 0x1DB357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3578u;
    // 0x1db357c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3578u, 0x1DB3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3580u;
label_1db3580:
    // 0x1db3580: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1db3580u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1db3584: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1db3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1db3588: 0xc76c684  jal         func_1DB1A10
    ctx->pc = 0x1DB3588u;
    SET_GPR_U32(ctx, 31, 0x1DB3590u);
    ctx->pc = 0x1DB358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3588u;
    // 0x1db358c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1A10u, 0x1DB3588u, 0x1DB3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3590u;
label_1db3590:
    // 0x1db3590: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db3590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db3594: 0xc76c3e8  jal         func_1DB0FA0
    ctx->pc = 0x1DB3594u;
    SET_GPR_U32(ctx, 31, 0x1DB359Cu);
    ctx->pc = 0x1DB3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3594u;
    // 0x1db3598: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0FA0u, 0x1DB3594u, 0x1DB359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB359Cu;
label_1db359c:
    // 0x1db359c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1db359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1db35a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DB35A0u;
    {
        const bool branch_taken_0x1db35a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35A0u;
        // 0x1db35a4: 0x3c0f01dc  lui         $t7, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35a0) {
            ctx->pc = 0x1DB3608u;
            goto label_1db3608;
        }
    }
    ctx->pc = 0x1DB35A8u;
    // 0x1db35a8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x1db35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db35ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1db35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db35b0: 0x25efb7dc  addiu       $t7, $t7, -0x4824
    ctx->pc = 0x1db35b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948828));
    // 0x1db35b4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db35b8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1db35b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1db35bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1db35bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db35c0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DB35C0u;
    {
        const bool branch_taken_0x1db35c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35C0u;
        // 0x1db35c4: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35c0) {
            ctx->pc = 0x1DB35ECu;
            goto label_1db35ec;
        }
    }
    ctx->pc = 0x1DB35C8u;
    // 0x1db35c8: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db35c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db35cc: 0x25efb7e0  addiu       $t7, $t7, -0x4820
    ctx->pc = 0x1db35ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948832));
    // 0x1db35d0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db35d0u;
    { uint32_t bits = FAST_READ32(0x1DBB7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db35d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1db35d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db35d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB35D8u;
    {
        const bool branch_taken_0x1db35d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35D8u;
        // 0x1db35dc: 0x44806000  mtc1        $zero, $f12 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35d8) {
            ctx->pc = 0x1DB35ECu;
            goto label_1db35ec;
        }
    }
    ctx->pc = 0x1DB35E0u;
    // 0x1db35e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db35e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db35e4: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB35E4u;
    SET_GPR_U32(ctx, 31, 0x1DB35ECu);
    ctx->pc = 0x1DB35E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB35E4u;
    // 0x1db35e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB35E4u, 0x1DB35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB35ECu;
label_1db35ec:
    // 0x1db35ec: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1db35ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db35f0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1db35f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db35f4: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1db35f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1db35f8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB35F8u;
    {
        const bool branch_taken_0x1db35f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35F8u;
        // 0x1db35fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35f8) {
            ctx->pc = 0x1DB360Cu;
            goto label_1db360c;
        }
    }
    ctx->pc = 0x1DB3600u;
    // 0x1db3600: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1db3600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db3604: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1db3604u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1db3608:
    // 0x1db3608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db360c:
    // 0x1db360c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db360cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db3610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3614: 0x876c78c  j           func_1DB1E30
    ctx->pc = 0x1DB3614u;
    ctx->pc = 0x1DB3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3614u;
    // 0x1db3618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1E30u;
    sub_01DB1E30_0x1db1e30(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB361Cu;
    // 0x1db361c: 0x0  nop
    ctx->pc = 0x1db361cu;
    // NOP
    ctx->pc = 0x1db3620u;
}
