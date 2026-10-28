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

// Function: sub_01D522A0
// Address: 0x1d522a0 - 0x1d523b0
void sub_01D522A0_0x1d522a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D522A0_0x1d522a0");
#endif

    switch (ctx->pc) {
        case 0x1d522c8u: goto label_1d522c8;
        case 0x1d52308u: goto label_1d52308;
        case 0x1d5235cu: goto label_1d5235c;
        default: break;
    }

    ctx->pc = 0x1d522a0u;

    // 0x1d522a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d522a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d522a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d522a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d522a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d522a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d522ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d522acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d522b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d522b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d522b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d522b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d522b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d522b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d522bc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d522bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d522c0: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D522C0u;
    SET_GPR_U32(ctx, 31, 0x1D522C8u);
    ctx->pc = 0x1D522C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D522C0u;
    // 0x1d522c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D522C0u, 0x1D522C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D522C8u;
label_1d522c8:
    // 0x1d522c8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d522c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d522cc: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1d522ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d522d0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d522d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d522d4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1d522d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d522d8: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1d522d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1d522dc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1d522dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d522e0: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1d522e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d522e4: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d522e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d522e8: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1d522e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d522ec: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d522ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d522f0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d522f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d522f4: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1d522f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1d522f8: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1d522f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1d522fc: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1d522fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1d52300: 0xc7543c6  jal         func_1D50F18
    ctx->pc = 0x1D52300u;
    SET_GPR_U32(ctx, 31, 0x1D52308u);
    ctx->pc = 0x1D52304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52300u;
    // 0x1d52304: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F18u, 0x1D52300u, 0x1D52308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52308u;
label_1d52308:
    // 0x1d52308: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1d52308u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5230c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5230cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d52310: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1d52310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d52314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d52314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52318: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d52318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d5231c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1d5231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d52320: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1d52320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1d52324: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1d52324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1d52328: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1d52328u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d5232c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1d5232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d52330: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1d52330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1d52334: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1d52334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1d52338: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1d52338u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d5233c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1d5233cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d52340: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1d52340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1d52344: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1d52344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d52348: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d52348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d5234c: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1d5234cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1d52350: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1d52350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1d52354: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1d52354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1d52358: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1d52358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1d5235c:
    // 0x1d5235c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d5235cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d52360: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1d52360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1d52364: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d52364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d52368: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1d52368u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d5236c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d5236cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d52370: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1d52370u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d52374: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1d52374u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1d52378: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1d52378u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1d5237c: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1d5237cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1d52380: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1d52380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1d52384: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1d52384u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1d52388: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1d52388u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d5238c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D5238Cu;
    {
        const bool branch_taken_0x1d5238c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D52390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5238Cu;
        // 0x1d52390: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5238c) {
            ctx->pc = 0x1D5235Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5235c;
        }
    }
    ctx->pc = 0x1D52394u;
    // 0x1d52394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5239c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5239cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d523a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d523a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d523a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D523A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D523A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D523A4u;
        // 0x1d523a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D523A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D523ACu;
    // 0x1d523ac: 0x0  nop
    ctx->pc = 0x1d523acu;
    // NOP
    ctx->pc = 0x1d523b0u;
}
