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

// Function: sub_01D1A3F8
// Address: 0x1d1a3f8 - 0x1d1a508
void sub_01D1A3F8_0x1d1a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1A3F8_0x1d1a3f8");
#endif

    switch (ctx->pc) {
        case 0x1d1a420u: goto label_1d1a420;
        case 0x1d1a460u: goto label_1d1a460;
        case 0x1d1a4b4u: goto label_1d1a4b4;
        default: break;
    }

    ctx->pc = 0x1d1a3f8u;

    // 0x1d1a3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1a3fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1a400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1a404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1a408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d1a408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a40c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1a410: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d1a410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a414: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1a414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1a418: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A418u;
    SET_GPR_U32(ctx, 31, 0x1D1A420u);
    ctx->pc = 0x1D1A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A418u;
    // 0x1d1a41c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A418u, 0x1D1A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A420u;
label_1d1a420:
    // 0x1d1a420: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d1a420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1a424: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1d1a424u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d1a428: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d1a428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1a42c: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1d1a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d1a430: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1d1a430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1d1a434: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1d1a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d1a438: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1d1a438u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d1a43c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d1a43cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d1a440: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1d1a440u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d1a444: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d1a444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d1a448: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d1a448u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d1a44c: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1d1a44cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1d1a450: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1d1a450u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1d1a454: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1d1a454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1d1a458: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A458u;
    SET_GPR_U32(ctx, 31, 0x1D1A460u);
    ctx->pc = 0x1D1A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A458u;
    // 0x1d1a45c: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A458u, 0x1D1A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A460u;
label_1d1a460:
    // 0x1d1a460: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1d1a460u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1a464: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d1a464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1a468: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1d1a468u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d1a46c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1a46cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a470: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d1a470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d1a474: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1d1a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a478: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1d1a478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1d1a47c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1d1a47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1d1a480: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1d1a480u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d1a484: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1d1a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a488: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1d1a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1d1a48c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1d1a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1d1a490: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1d1a490u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d1a494: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1d1a494u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d1a498: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1d1a498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1d1a49c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1d1a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a4a0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d1a4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d1a4a4: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1d1a4a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1d1a4a8: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1d1a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1d1a4ac: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1d1a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1d1a4b0: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1d1a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1d1a4b4:
    // 0x1d1a4b4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d1a4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d1a4b8: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1d1a4b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1d1a4bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d1a4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d1a4c0: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1d1a4c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d1a4c4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d1a4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d1a4c8: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1d1a4c8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d1a4cc: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1d1a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1d1a4d0: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1d1a4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1d1a4d4: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1d1a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1d1a4d8: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1d1a4d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1d1a4dc: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1d1a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1d1a4e0: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1d1a4e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d1a4e4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D1A4E4u;
    {
        const bool branch_taken_0x1d1a4e4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A4E4u;
        // 0x1d1a4e8: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a4e4) {
            ctx->pc = 0x1D1A4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1a4b4;
        }
    }
    ctx->pc = 0x1D1A4ECu;
    // 0x1d1a4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a4f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1a4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a4f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1a4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A4FCu;
        // 0x1d1a500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A504u;
    // 0x1d1a504: 0x0  nop
    ctx->pc = 0x1d1a504u;
    // NOP
    ctx->pc = 0x1d1a508u;
}
